# c-banking-system
A simple  C-based banking system with deposit,withdrawal,balance check and mini statements features.
# ATM Simulation Project (C Language)

This project is a simple **ATM Simulation System** implemented in C. It demonstrates the use of:

* Functions
* Arrays
* Global variables
* Conditional statements
* Loops
* Basic input/output handling

---

## 📌 Features

### 1. **Check Balance**

Displays the current available balance.

### 2. **Deposit Money**

Allows the user to deposit money, updates the balance, and records the transaction.

### 3. **Withdraw Money**

Allows the user to withdraw money if sufficient balance is available. The withdrawal is stored as a negative transaction.

### 4. **Mini Statement**

Shows the last 10 transactions (both deposit and withdrawal) from the `hist[]` array.

### 5. **Exit**

Ends the program safely.

---

## 🧠 How It Works

### 🔹 Global Variables

* `balance` — stores the user's bank balance.
* `hist[10]` — stores last 10 transactions.
* `histCount` — keeps track of number of transactions.

### 🔹 Functions Used

* `checkBalance()` — prints current balance.
* `deposit()` — adds money and stores transaction.
* `withdraw()` — subtracts money if balance permits.
* `miniStatement()` — prints all stored transactions.

### 🔹 `main()` Logic

Uses a **do-while loop** to display the menu until user selects Exit.
A **switch-case** handles each menu option.

---

## ▶️ How to Run

1. Save the program as `atm.c`.
2. Compile using:

   ```bash
   gcc atm.c -o atm
   ```
3. Run the program:

   ```bash
   ./atm
   ```

---

## 📷 Sample Output

```
======= ATM MENU =======
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Mini Statement
5. Exit
Enter your choice: 2
Enter amount to deposit: Rs.500
Deposited: Rs.500.00
```

---

## 📌 Future Improvements (Optional)

* Add PIN verification
* File handling to store transactions permanently
* Limit transactions if hist[] becomes full
* Add date/time to each transaction

---

## 👨‍💻 Author

Created by **Siddhesh** as part of C programming practice.

Feel free to modify and improve!
