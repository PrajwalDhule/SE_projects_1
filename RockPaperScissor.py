import random
replay = "1"
print("Welcome to the Rock-Paper-Scissor game!")

while replay == "1":
    print("\nChoose any one of the following")
    print("1.Rock\n2.Paper\n3.Scissor\n")
    user = int(input("Your choice(int): "))
    while user > 3 or user < 1:
        user = int(input("Please enter a valid input: "))

    if user == 1:
        userchoice = "Rock"
    elif user == 2:
        userchoice = "Paper"
    else:
        userchoice = "Scissor"
    print(f"Your choice: {userchoice}")

    comp = random.randint(1, 3)
    if comp == 1:
        compchoice = "Rock"
    elif comp == 2:
        compchoice = "Paper"
    else:
        compchoice = "Scissor"

    print(f"Computer's choice is: {compchoice}")
    print("---------------------------------")
    print(f"{userchoice} v/s {compchoice}!")
    print("---------------------------------")

    if((user == 1 and comp == 2) or (user == 2 and comp == 1)):
        winner = "Paper"
    elif((user == 1 and comp == 3) or (user == 3 and comp == 1)):
        winner = "Rock"
    else:
        winner = "Scissor"

    if user == comp:
        print("Its a draw!")
    else:
        print(f"{winner} wins!\n")
        if winner == userchoice:
            print("Congrats! YOU WON!")
        else:
            print("Sorry. YOU LOST against the computer!")
    print("---------------------------------")

    replay = input("To play again, enter 1 else enter anything: ")

print("Thank you for playing!")
