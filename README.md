# 🎯 Number Guessing Game (C++)

A simple console-based number guessing game written in C++. The computer randomly chooses a number between 1 and 20, and the player has 5 tries to guess it correctly. Each round ends in either victory or defeat, and the player is prompted to play again or exit by pressing **ESC**.

---

## 🕹️ How to Play

1. Run the program.
2. Try to guess the number between 1 and 20.
3. You have 5 attempts.
4. If you guess correctly, you win. If not, the game mocks you and offers a rematch.
5. Press **ESC** to exit or any other key to play again.

---

## 🧩 Features

- Random number generation using Mersenne Twister (`<random>`)
- Cross-platform key detection via `_getch()` from `<conio.h>` (Windows)
- Robust input validation (no crashes on bad input)
- Looped gameplay with ESC key to quit

---

## 🛠️ Technologies Used

- C++
- `<iostream>`, `<random>`, `<conio.h>`, `<string>`, `<cctype>`
- Compiled on Windows

---

## 📦 Files

| File          | Description                        |
|---------------|------------------------------------|
| `main.cpp`    | Main game logic and loop           |
| `numguess.cpp`| Input validation function          |
| `numguess.h`  | Header for input function          |
| `numguess.exe`| Precompiled executable (Windows)   |

---

## 🔧 How to Compile

Make sure you are using a Windows-compatible compiler (like MinGW or MSVC), as `<conio.h>` is non-standard.

### Compile via g++ (MinGW)
```bash
g++ main.cpp numguess.cpp -o numguess.exe
```

Then run:
```bash
./numguess.exe
```

---

## 🧪 Sample Output

```
LET'S PLAY A GAME!
I AM THINKING OF A NUMBER BETWEEN 1 AND 20
YOU HAVE 5 ATTEMPTS TO GUESS THE NUMBER CORRECTLY OR ELSE...
GUESS NOW WHAT NUMBER I AM THINKING!
Enter an integer: 10
WRONG GUESS HAHAHHAHAH!
You only have 4 left
...
```

---

## 📄 License

MIT License

---

## 🤝 Contributing

This project is for learning and fun! If you'd like to improve the game (add difficulty levels, sound effects, etc.), feel free to fork and contribute.

---

## 👨‍💻 Author

Fabio H B Lopes
