# Qt C++ Educational Course Management System - Honor's Project

## Overview
This is a Qt C++ desktop application that serves as an educational course management system. The application provides user registration, login functionality, course browsing, and access to C++ programming resources. Built as an honors project to demonstrate Qt framework proficiency and modern C++ development practices.

## Features
- **User Registration & Authentication**: Secure user registration with credential storage
- **Login System**: Progress-tracked login with validation and visual feedback
- **Course Catalog**: Browse available computer science courses (CSC 101-331)
- **Resource Access**: Direct links to C++ learning resources including:
  - W3Schools C++ Tutorial
  - CPlusplus.com Documentation
  - CPPreference.com
- **Modern Qt GUI**: Clean, user-friendly interface built with Qt Designer
- **Cross-platform Compatibility**: Runs on macOS, Windows, and Linux
- **Video Player Integration**: Additional video playback capabilities

## Technical Stack
- **Language**: C++17
- **Framework**: Qt 6.x (backward compatible with Qt 5.15+)
- **Build System**: CMake 3.16+
- **UI Framework**: Qt Widgets with Qt Designer (.ui files)
- **Additional Qt Modules**: Qt Multimedia

## Project Structure
```
finalHonor/                 # Main application
├── main.cpp               # Application entry point
├── mainwindow.*          # Main registration window
├── login.*               # User login dialog
├── courses.*             # Course selection interface
├── coursedetail.*        # Course details and resources
├── *.ui                  # Qt Designer UI files
├── videoEkran.qrc       # Qt Resource file
├── userdata.txt         # User credentials storage
└── CMakeLists.txt       # Build configuration

videoplay/                 # Video player component
├── main.cpp
├── videoplayer.*
├── videoplay.pro
└── videoplayer.ui
```

## Prerequisites
- Qt 6.x or Qt 5.15+ with Qt Creator (recommended)
- CMake 3.16 or higher
- C++17 compatible compiler (GCC 7+, Clang 5+, MSVC 2017+)
- Qt Widgets and Qt Multimedia modules

## Installation & Setup

### Option 1: Using Qt Creator (Recommended)
1. Clone the repository:
   ```bash
   git clone https://github.com/Dialloni/Qt-C-Honor-s-Project.git
   cd Qt-C-Honor-s-Project/finalHonor
   ```

2. Open `CMakeLists.txt` in Qt Creator
3. Configure the project with your Qt kit
4. Build and run the project

### Option 2: Command Line Build
1. Clone and navigate to the project:
   ```bash
   git clone https://github.com/Dialloni/Qt-C-Honor-s-Project.git
   cd Qt-C-Honor-s-Project/finalHonor
   ```

2. Create build directory and build:
   ```bash
   mkdir build && cd build
   cmake .. -DCMAKE_PREFIX_PATH=/path/to/qt
   cmake --build .
   ```

3. Run the application:
   ```bash
   ./finalHonor           # On Linux/macOS
   finalHonor.exe         # On Windows
   ```

## Usage

### Application Flow
1. **Registration**: Launch the app and register with a username and password
2. **Login**: Use your credentials to log in (features progress bar for visual feedback)
3. **Course Selection**: Browse available computer science courses:
   - CSC 101 and CSC 111 (Introduction to Programming)
   - CSC 211 and CSC 211h (Data Structures)
   - CSC 350 and CSC 350h (Software Engineering)
   - CSC 331 and CSC 331h (Database Systems)
4. **Access Resources**: Click on course details to access C++ learning resources

### Navigation Path
```
Registration → Login → Course Selection → Course Details → External Resources
```

## Components Description
- **MainWindow**: Handles user registration and credential storage to local file
- **Login**: Manages user authentication with animated progress indication  
- **Courses**: Displays available computer science courses with selection
- **CourseDetail**: Provides access to external C++ learning resources via web links
- **VideoPlayer**: Separate multimedia component for video content

## Development Notes
- Uses Qt's signal-slot mechanism for UI interactions
- Implements file I/O for simple user data persistence (`userdata.txt`)
- Demonstrates Qt widgets, dialogs, and desktop services integration
- Follows Qt naming conventions and best practices
- Includes resource management with `.qrc` files
- Modular design with separate dialogs for different functionalities

## Data Storage
Currently uses simple text file storage (`userdata.txt`) for user credentials. For production use, consider implementing:
- Database integration (SQLite/PostgreSQL)
- Password encryption and hashing
- Secure credential management

## Future Enhancements
- Database integration for user management
- Enhanced security with password encryption
- Complete video player integration
- Course progress tracking
- Multiple user support with user profiles
- Administrative features
- Offline course content
- Course completion certificates

## Contributing
1. Fork the repository
2. Create a feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License
This project is created for educational purposes as part of an honors program.

## Author
- **Dialloni** - [GitHub Profile](https://github.com/Dialloni)

## Acknowledgments
- Qt Community for excellent documentation and examples
- Computer Science Department for project guidance
- C++ community resources (W3Schools, CPlusplus.com, CPPreference)
- Thanks to professors and mentors for their support
