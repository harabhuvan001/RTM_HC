


# Real-Time Monitoring System for Healthcare

This project processes patient health data, identifies abnormalities, and integrates with AWS for cloud storage and further analysis.

## Features
- Processes health data using C++ for real-time analysis.
- Integrates with AWS S3 for secure data storage.
- Provides clean and normalized datasets for further use.

## Steps
1. Process data in Python (EDA, preprocessing, feature engineering).
2. Use C++ for real-time health monitoring analysis.
3. Integrate with AWS for data storage.

## Dataset
- **Name**: Human Vital Signs
- **Size**: 25,214 records
- **Features**:
  - `time_(s)`: Time in seconds
  - `hr_(bpm)`: Heart rate
  - `resp_(bpm)`: Respiration rate
  - `spo2_(%)`: Oxygen saturation
  - `temp_(*c)`: Temperature in Celsius
  - `output`: Abnormal/Normal classification
  - `hr_zone`: Derived heart rate zone feature

## How to Use
1. Clone the repository.
2. Configure AWS credentials in the Python script.
3. Run the C++ program for data analysis.
4. Upload the dataset to AWS S3 for further processing.

