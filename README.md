# 🏦 My First Project: Banking System in C

Welcome to my very first GitHub repository! This is a private, console-based Banking System application that I built using the C programming language to practice core coding concepts, logic building, and file management.

---

## 🎯 Project Goals & Learning Objectives
As my first programming project, my main goals were to:
* Learn how to organize a codebase using C structures (`struct`).
* Figure out how to keep data alive even after closing the terminal using File Handling.
* Learn the basics of Git version control (committing code, tracking changes, and using GitHub).

---

## 🚀 Features

This application simulates how a basic real-world bank operating terminal works:
* **Account Creation:** Sets up a new user profile with a unique account number.
* **Deposits & Withdrawals:** Adds or subtracts money while checking to make sure balances don't drop below zero.
* **Balance Check:** Instantly looks up and displays current account details.
* **Data Saving:** Automatically writes account data to a local file so my progress is saved for the next time I run it.

---

## 🛠️ Concepts I Used
* **Structures (`struct`):** Used to bundle user data like names, account numbers, and balances together.
* **File I/O (`fopen`, `fprintf`, `fscanf`):** Used to read and write data to a text file database.
* **Control Flow:** Loops (`while`) and conditional blocks (`switch-case`) to create an interactive menu.

---

## 💻 How I Run This Code

### Prerequisites
I use a C compiler (like `gcc`) to run this code on my machine.

### Execution Steps
1. Open my terminal or command prompt inside this folder.
2. Compile the code using the command:
   ```bash
   gcc main.c -o banking_app
   ```
3. Run the compiled application:
   * **On Windows:** `banking_app.exe`
   * **On Mac/Linux:** `./banking_app`

---

## 📈 Future Improvements I Might Add
Since this is a living project, I want to add these features as I learn more:
* [ ] Add a secure login password for accounts.
* [ ] Add a "Transfer Money" feature between two different accounts.
* [ ] Track a history of transactions (deposits and withdrawals) for each user.
