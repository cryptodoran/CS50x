from cs50 import SQL

db = SQL("sqlite:///favroties.db")

favorite = input("Favorite: ")

rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE problem = 'Mario'")

for row in rows:
    print(row["n"])