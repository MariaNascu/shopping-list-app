# 🛒 Shopping List (C++)

A small C++ console application that lets users build and view a shopping list.

---

## 📋 Features

- Prompt the user for a number of items
- Collect each item's:
  - Name
  - Quantity
  - Category
  - Whether it's been purchased
- Store all items in a list
- Display the entire list in a clean format

---

## 🛠️ Requirements

- C++17 or later
- A C++ compiler (e.g., MSVC, g++, clang)
- (Optional) Visual Studio for project file compatibility

---

## 🚀 How to Build & Run

### With Visual Studio:
1. Open the `ShoppingList.sln` file.
2. Build the project (`Ctrl + Shift + B`).
3. Run the program (`Ctrl + F5`).

### With g++ (command line):

```bash
g++ -std=c++17 -o ShoppingList main.cpp Item.cpp ShoppingListUtils.cpp
./ShoppingList
