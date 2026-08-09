#include <iostream>
#include <string>
#include <vector>

class Sensor {
public:
    Sensor(const std::string& name, const std::string& unit)
        : name_(name), unit_(unit) {}

    void addReading(double value) {
        readings_.push_back(value);
    }

    double getAverage() const {
        if (readings_.empty()) return 0.0;
        double sum = 0.0;
        for (double r : readings_) {
            sum += r;
        }
        return sum / readings_.size();
    }

    double getLatest() const {
        return readings_.empty() ? 0.0 : readings_.back();
    }

    void printStatus() const {
        std::cout << "Sensor: " << name_ << "\n";
        std::cout << "  Latest: " << getLatest() << " " << unit_ << "\n";
        std::cout << "  Average: " << getAverage() << " " << unit_ << "\n";
    }

private:
    std::string name_;
    std::string unit_;
    std::vector<double> readings_;
};

int main() {
    Sensor motorSpeed("Motor Speed", "RPM");
    motorSpeed.addReading(1500.0);
    motorSpeed.addReading(1520.0);
    motorSpeed.addReading(1485.0);
    motorSpeed.addReading(1510.0);

    Sensor motorTemp("Motor Temperature", "C");
    motorTemp.addReading(45.2);
    motorTemp.addReading(46.8);
    motorTemp.addReading(47.1);

    Sensor vibration("Vibration", "mm/s");
    vibration.addReading(0.12);
    vibration.addReading(0.15);
    vibration.addReading(0.11);

    Sensor current("Motor Current", "A");
    current.addReading(12.5);
    current.addReading(12.8);
    current.addReading(13.1);

    std::cout << "=== Motor Diagnostics ===\n\n";
    motorSpeed.printStatus();
    std::cout << "\n";
    motorTemp.printStatus();
    std::cout << "\n";
    vibration.printStatus();
    std::cout << "\n";
    current.printStatus();

    return 0;
}
