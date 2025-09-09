income = float(input("Enter your monthly income: "))
rent = float(input("rent expenses: "))
food = float(input("food expenses: "))
travel = float(input("travel expenses: "))
misc = float(input("misc: "))

if income - (rent + food + travel + misc) < 0:
    print("You are overspending, try cutting back on some expenses.")
elif income - (rent + food + travel + misc) < 1000:
    print("Close to overspending, try to save more.")
else:
    print("You are doing great with your spending habits.")

print("You have", income - (rent + food + travel + misc), "Rs left")

summary= "BUDGET SUMMARY\n\n" \
f"Monthly Income:         {income} Rs\n" \
f"Rent Expenses:          {rent} Rs\n" \
f"Food Expenses:          {food} Rs\n" \
f"Travel Expenses:        {travel} Rs\n" \
f"Miscellaneous Expenses: {misc} Rs\n" \
f"Total Expenses:         {rent + food + travel + misc} Rs\n" \
f"Remaining Balance:      {income - (rent + food + travel + misc)} Rs\n"

with open("python/Budget_Summary.txt", "w") as file:
    file.write(summary)

print("Budget report created")
