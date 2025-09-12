# 🎮 Rock–Paper–Scissors Game ✊📄✂️  

A simple **C++ console-based Rock–Paper–Scissors game** where you play against the computer.  
The computer’s moves are randomly generated, and the game keeps track of **rounds, winners, and final results**.  

---

## 📝 Features  
✅ Play **Stone (Rock), Paper, or Scissors** against the computer.  
✅ Randomized computer moves using **rand()** and **srand()**.  
✅ Supports **multiple rounds** (default = 3 rounds per game).  
✅ Tracks and displays:  
- Player wins  
- Computer wins  
- Draws  
✅ Displays a **final winner summary** after all rounds.  
✅ Option to **play again** without restarting the program.  

---

## ⚙️ How It Works  
1️⃣ The player chooses:  
- `1` → **Stone**  
- `2` → **Paper**  
- `3` → **Scissors**  

2️⃣ The computer randomly chooses its move.  

3️⃣ The game decides the round winner:  
- **Stone beats Scissors**  
- **Paper beats Stone**  
- **Scissors beat Paper**  
- Same choice → **Draw**  

4️⃣ After all rounds, the **final game winner** is declared.  

---

## 📂 Code Structure  

### 🔹 Enums  
- `enGameChoice` → Game choices (**Stone, Paper, Scissors**)  
- `enWinner` → Round/Game results (**Player1, Computer, Draw**)  

### 🔹 Structs  
- `stRoundInfo` → Stores round details (choices, winner, etc.)  
- `stGameResults` → Stores overall game results  

### 🔹 Main Functions  
- `RandomNumber()` → Generates random numbers  
- `GetComputerChoice()` → Picks computer’s move  
- `WhoWonTheRound()` → Decides round winner  
- `WhoWonTheGame()` → Declares final game winner  
- `PrintRoundResults()` → Prints round details  
- `PlayGame()` → Plays multiple rounds  
- `StartGame()` → Handles replay loop  

---

💻 **Made with C++** | ✨ By **Abubakaryimam**  
