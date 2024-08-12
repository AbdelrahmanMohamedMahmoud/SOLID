#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int age;
    string position;
    
    void hireEmployee() {
        cout << "Hiring employee: " << name << endl;
    }
    
    void fireEmployee() {
        cout << "Firing employee: " << name << endl;
    }
    
    void printDetails() {
        cout << "Name: " << name << ", Age: " << age << ", Position: " << position << endl;
    }
    
    void calculatePay() {
        cout << "Calculating pay for: " << name << endl;
    }
    
    void promoteEmployee() {
        cout << "Promoting employee: " << name << endl;
    }
};

class Manager : public Employee {
public:
    int teamSize;

    void manageTeam() {
        cout << "Managing a team of size: " << teamSize << endl;
    }

    void addTeamMember() {
        cout << "Adding team member" << endl;
    }
    
    void removeTeamMember() {
        cout << "Removing team member" << endl;
    }

    void scheduleMeeting() {
        cout << "Scheduling a meeting" << endl;
    }

    void reviewPerformance() {
        cout << "Reviewing performance" << endl;
    }
};

class Report {
public:
    virtual void generateReport() {
        cout << "Generating general report" << endl;
    }

    void printReport() {
        cout << "Printing report" << endl;
    }

    void saveReport() {
        cout << "Saving report" << endl;
    }

    void deleteReport() {
        cout << "Deleting report" << endl;
    }

    void sendReport() {
        cout << "Sending report" << endl;
    }
};

class PDFReport : public Report {
public:
    void generateReport() override {
        cout << "Generating PDF report with special format" << endl;
    }
};

class PayrollSystem {
public:
    void processPayroll() {
        cout << "Processing payroll" << endl;
    }

    void generatePayslip() {
        cout << "Generating payslip" << endl;
    }

    void sendPayslip() {
        cout << "Sending payslip" << endl;
    }

    void handleEmployeeBenefits() {
        cout << "Handling employee benefits" << endl;
    }

    void handleEmployeeTaxes() {
        cout << "Handling employee taxes" << endl;
    }
};

class Logger {
public:
    void logError(string error) {
        cout << "Logging error: " << error << endl;
    }

    void logWarning(string warning) {
        cout << "Logging warning: " << warning << endl;
    }

    void logInfo(string info) {
        cout << "Logging info: " << info << endl;
    }

    void logDebug(string debug) {
        cout << "Logging debug: " << debug << endl;
    }

    void logTrace(string trace) {
        cout << "Logging trace: " << trace << endl;
    }
};

int main() {
    Employee emp;
    emp.name = "John Doe";
    emp.age = 30;
    emp.position = "Developer";
    emp.hireEmployee();
    emp.calculatePay();

    Manager mgr;
    mgr.name = "Jane Smith";
    mgr.teamSize = 10;
    mgr.manageTeam();

    PDFReport report;
    report.generateReport();
    report.printReport();

    PayrollSystem payroll;
    payroll.processPayroll();

    Logger logger;
    logger.logError("This is an error");

    return 0;
}
