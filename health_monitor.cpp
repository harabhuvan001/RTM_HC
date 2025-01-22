
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("/content/drive/MyDrive/Internship_projects/P1/Human_vital_signs_Cleaned.csv");
    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line, value;
    int abnormal_count = 0, total_count = 0;

    // Read header
    getline(file, line);

    // Process each line
    while (getline(file, line)) {
        stringstream ss(line);
        string time, hr, resp, spo2, temp, output, hr_zone;

        getline(ss, time, ',');
        getline(ss, hr, ',');
        getline(ss, resp, ',');
        getline(ss, spo2, ',');
        getline(ss, temp, ',');
        getline(ss, output, ',');
        getline(ss, hr_zone, ',');

        total_count++;
        if (output == "Abnormal") {
            abnormal_count++;
        }
    }

    file.close();

    cout << "Total Records: " << total_count << endl;
    cout << "Abnormal Records: " << abnormal_count << endl;

    return 0;
}
