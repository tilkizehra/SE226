totalSeconds=int(input("enter total number of seconds: "))
hours=totalSeconds // 3600
remaining = totalSeconds% 3600
minutes= remaining // 60
seconds = remaining % 60
print(totalSeconds, hours, "hours",minutes, "minutes", seconds, "is seconds")


