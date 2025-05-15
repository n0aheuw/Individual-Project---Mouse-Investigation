# 🐭 Individual Project – Mouse Investigation

![Project Status](https://img.shields.io/badge/status-completed-brightgreen)
![Built With](https://img.shields.io/badge/built%20with-LaTeX-blue)
![Final Year Project](https://img.shields.io/badge/university-project-yellow)

This repository contains the final year individual project report for my **Computer Systems Engineering BEng** degree at the **University of Bath**. The project investigates enhancements to the University’s existing 'mouse' design project, focusing on improving the control systems, integrating additional feedback mechanisms, and reducing power supply requirements within the system.

---

## 📖 Project Overview

The University of Bath 'mouse' design project involves a small, motor-driven vehicle capable of navigating a course. This investigation targeted several control system limitations within the existing design and proposed a range of improvements aimed at increasing performance, reliability, and efficiency.

### 🔍 Key Objectives

- Improve control feedback systems.
- Reduce the requirement for multiple power supplies within the sensing subsystem.
- Integrate additional sensor feedback for enhanced motion control and system monitoring.

---

## ⚙️ Subsystems and Notable Features

- **Negative Supply Rail Generation**  
  Implemented using a **555 timer circuit** with a charge pump configuration to generate a negative supply rail, allowing op-amps in the position feedback subsystem to operate without requiring a dedicated negative power supply.

- **Speed Feedback System**  
  Introduced a **Hall effect sensor** to provide real-time rotational speed feedback from the motor shaft, enhancing control accuracy compared to existing estimations.

- **Current Sensing**  
  Developed a **low-side current sensing circuit** using a **shunt resistor** on the motor drive, enabling monitoring of motor current draw for diagnostics and protection features.

---

## 📄 Repository Contents

📦 mouse-investigation/
┣ 📂 Report_LATEX/ # LaTeX source files for the report
┣ 📂 Report_LATEX/circuits/ # Circuit diagrams and illustrations
┣ 📂 Report_LATEX/code/ # Source code for control systems and testing
┣ 📄 final_report.pdf # Final compiled version of the report
┗ 📄 README.md # This file


---

## 📥 How to View the Report

1. **Download the repository**:

   ```bash
   git clone https://github.com/n0aheuw/mouse-investigation.git

2. Open the final_report.pdf file to view the full project documentation.

3. (Optional) Navigate to the Report_LATEX/ directory to inspect or modify the LaTeX files and recompile the report:

   ```bash
   cd report
   pdflatex main.tex
   
---

🏁 Project Status

✅ Completed: Submitted as part of my final year assessment. The repository has been made available for reference and for anyone interested in small-scale control system design, sensor feedback integration, and low-power electronics applications.

---

📬 Contact

For questions or collaborations, feel free to connect via [LinkedIn](https://www.linkedin.com/in/noahjohnson-cse/) or open an issue in this repository.

---

## 📜 License

This project is licensed under the [Creative Commons Attribution-NonCommercial 4.0 International License (CC BY-NC 4.0)](https://creativecommons.org/licenses/by-nc/4.0/).

You are free to:

- **Share** — copy and redistribute the material in any medium or format.
- **Adapt** — remix, transform, and build upon the material.

Under the following terms:

- **Attribution** — You must give appropriate credit, provide a link to the license, and indicate if changes were made.
- **NonCommercial** — You may not use the material for commercial purposes.
