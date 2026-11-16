# 🏦 Banking System in C

A menu-driven, console-based banking application written in C. It was my very first GitHub project, built to practise core C concepts, logic building, and file management.

![Language](https://img.shields.io/badge/language-C-blue)
![Type](https://img.shields.io/badge/type-console%20app-lightgrey)
![Status](https://img.shields.io/badge/status-in%20progress-yellow)

---

## 📖 About

This project brings common account operations together in a single console program. Account data is saved to files, so it is still there the next time you run the app.

I built it to turn what I was learning in C into something that actually works, and to get comfortable with Git and GitHub along the way.

## ✨ Features

When you run the program, you get this menu:

```
        WELCOME TO THE BANK
===================================
1. Create an account
2. Modify account holder details
3. View the account info
4. Deposit money
5. Withdraw money
6. Exit the bank
Enter your choice
```

| Option | What it does |
|--------|--------------|
| **1. Create an account** | Adds a new account holder and saves the record |
| **2. Modify holder details** | Updates the details of an existing account |
| **3. View account info** | Displays the stored information for an account |
| **4. Deposit money** | Adds funds to an account |
| **5. Withdraw money** | Takes funds out of an account |
| **6. Exit** | Closes the application |

## 🧠 C Concepts Practised

- **Structures:** grouping related account data
- **Enumerations (`enum`):** representing named options
- **File handling:** storing data persistently in files
- **File pointers and file manipulation:** reading, writing, and updating records
- **Arrays and strings:** working with collections and text
- **Modular programming:** splitting code into `.c` and `.h` files

## 📁 Project Structure

```
Banking-System-in-C/
├── main.c        # Entry point and main menu loop
├── data.c        # Account data handling
├── data.h        # Declarations for account data
├── advfunc.c     # Deposit, withdraw and other account functions
├── advfunc.h     # Declarations for the account functions
└── README.md
```

## 🚀 Getting Started

### Requirements

- A C compiler such as [GCC](https://gcc.gnu.org/) (MinGW on Windows)
- A terminal

> **Note:** The program uses `conio.h` and `system("cls")`, so it is written for **Windows**. On Linux or macOS you would need to replace these (for example, with `system("clear")`).

### Build

```bash
gcc main.c data.c advfunc.c -o bank
```

### Run

```bash
./bank        # Linux / macOS (after adapting the Windows-specific calls)
bank.exe      # Windows
```

## 🛣️ Roadmap

Ideas I'd like to work on next:

- [ ] Input validation (for example, rejecting negative or non-numeric amounts)
- [ ] Prevent withdrawals larger than the balance
- [ ] Search for accounts
- [ ] Make the program portable across Windows, Linux and macOS
- [ ] Add transaction history

## 📚 What I Learned

- Breaking a larger task into smaller, reusable functions
- Working with data stored in files
- Keeping code organised across multiple source and header files
- Using Git and GitHub to track changes

## 🤝 Feedback

I'm still learning, so suggestions and tips are very welcome. Feel free to open an issue or reach out.

## 👤 Author

**Obaid Shah**
GitHub: [@ObaidShah07](https://github.com/ObaidShah07)

---

*Code. Learn. Improve.*
