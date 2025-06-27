# Prison Management System CLI (C++)

A cross-platform Command Line Interface (CLI) program written in modern **C++** that helps manage a prison's core data, including **prisoners, staff, and cells**. This system provides features for adding, releasing, and displaying prisoners; hiring and firing staff; and tracking prison cell availability based on crime severity.

---
## Project Structure

PrisonMgmt/

├── CMakeLists.txt # Build configuration

├── README.md # Project documentation

├── include/

│       └── json.hpp # nlohmann::json single-header library

├── src/

│       └── main.cpp # Main application logic

├── data/ # Stores prison_data.json at runtime

└── build/ # CMake build directory

---
## Features:
- Add / Release Prisoners
- Assign prisoner cells based on crime severity
- Auto-calculate prisoner's release date
- Hire / Fire Staff members
- Display all prisoners, staff, or prison cells
- Persist data using `prison_data.json` via [nlohmann/json](https://github.com/nlohmann/json)

---
## Requirements:
- C++17 or later
- [nlohmann/json](https://github.com/nlohmann/json) (included in `include/json.hpp`)
- [CMake](https://cmake.org/) 3.10+

---
## Build & Run Instructions

### 1. Clone the repository:

```bash
git clone https://github.com/xen-0-nex/PrisonMgmt.git
cd PrisonMgmt
```

### 2. Create a build directory and compile:

```bash
mkdir build && cd build
cmake ..
make
```
### 3. Run the program:

```bash
./PrisonMgmt
```

---
## Future Improvements:
- Search prisoners or staff by name/ID
- Log prisoner movement history
- Password-protected admin access
- Export reports to CSV or PDF
---
## Author
- Name: **XenoneX**
- GitHub: **[@xen-0-nex](https://github.com/xen-0-nex)**
