# ATM Machine

## Description
This is a simple command-line ATM simulation program written in C.  
It allows a user to:
- Check account balance  
- Deposit money  
- Withdraw money (with validation for insufficient funds)  
- Exit safely  

The project was developed as part of the ALU Low-Level Programming curriculum, and it follows ANSI C and Betty coding style guidelines.

---

## Files
- `atm.c` → Source code for the ATM program  
- `atm` → Compiled binary executable  
- `README.md` → Project documentation  

---

## Compilation
To compile the program, run:

```bash
gcc -std=c2x -Wall -pedantic atm.c -o atm
````

This will generate the executable `atm`.

---

## Usage

Clone the Repo

git clone https://github.com/TheePoseidon/alu-low_level_programming

change directory to wk3-assignment

cd wk3-assignment

Run the ATM program:

```bash
./atm
```

---

## Demo Output

Example interaction with the program:

```
=== ATM Menu ===
1. Check Balance
2. Deposit
3. Withdraw
4. Exit

Enter your choice (1-4): 1
Current balance: $500.00

=== ATM Menu ===
1. Check Balance
2. Deposit
3. Withdraw
4. Exit

Enter your choice (1-4): 2
Enter amount to deposit: $200
Deposited $200.00. New balance: $700.00

=== ATM Menu ===
1. Check Balance
2. Deposit
3. Withdraw
4. Exit

Enter your choice (1-4): 3
Enter amount to withdraw: $150
Withdrew $150.00. New balance: $550.00

=== ATM Menu ===
1. Check Balance
2. Deposit
3. Withdraw
4. Exit

Enter your choice (1-4): 4
Thank you for using the ATM. Goodbye!
```

---

## Betty Style Compliance

The code was checked with the Betty linter:

```bash
betty atm.c
```

No errors or warnings.

---

