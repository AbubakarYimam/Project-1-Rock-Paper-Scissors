# 🎮 Stone–Paper–Scissor Game (C++)

✨ A fun and interactive **console-based game** built with C++  
🤖 Play against the computer and prove your strategy!

---

## 🚀 Features  

🎯 **Gameplay**
- 🤖 Play vs Computer
- 🔢 Choose number of rounds
- 🎲 Random computer moves

📊 **Tracking**
- 👤 Player Score  
- 💻 Computer Score  
- 🤝 Draws  

🖥️ **Experience**
- 📢 Round-by-round results  
- 🏁 Final winner summary  
- 🎨 Dynamic console colors  
- 🔁 Replay without restarting  

---

## 🎮 How to Play  

### 🕹️ Step 1 — Choose your move:
1 → 🪨 Stone  
2 → 📄 Paper  
3 → ✂️ Scissor  

### ⚔️ Step 2 — Computer plays 🤖  
- Random move generated automatically  

### 🧠 Step 3 — Winner decided:

| Your Move | Computer | Result |
|----------|---------|--------|
| 🪨 Stone | ✂️ Scissor | ✅ You Win |
| 📄 Paper | 🪨 Stone | ✅ You Win |
| ✂️ Scissor | 📄 Paper | ✅ You Win |
| Same | Same | 🤝 Draw |

---

## 📂 Code Structure  

### 🔹 Enum
StonePaperScissor  
- Stone = 1 🪨  
- Paper = 2 📄  
- Scissor = 3 ✂️  

---

### 🔹 Core Functions  

| Function | Purpose |
|--------|--------|
| RandomNumber() | 🎲 Generate random number |
| ReadRoundTurn() | 🔢 Read number of rounds |
| PersonChoice() | 👤 Get player choice |
| MachineChoice() | 💻 Computer choice |
| Choices() | ⚖️ Decide winner |
| ScoreBoard() | 📊 Show round details |
| TotalScore() | 🏁 Final result |
| DisplayMain() | 🔁 Game loop |

---

⚙️ Compile  
g++ Rock-paper-scissors.cpp -o game  

▶️ Run  
./game  

---

## 📸 Sample Gameplay  

🎮 Round[1] Started!  
------------------------------  
👤 Player Choice   : 🪨 Stone  
💻 Computer Choice : 📄 Paper  
🏆 Winner          : [PC WIN]  
------------------------------  

---

## ⚠️ Notes  

- 💡 Works best on Windows  
- 🎨 Uses system("color")  
- 🧹 Uses system("cls")  
- ⏱️ Uses srand(time(NULL))  

---

## 🔮 Future Improvements  

- ❗ Input validation  
- 🎨 GUI version  
- 👥 Multiplayer  
- 💾 Save scores  

---

## 👨‍💻 Author  

Abubakar Yimam 🚀  

---

## 📜 License  

Free to use and modify
