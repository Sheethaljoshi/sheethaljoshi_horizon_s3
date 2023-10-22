count = 0
tot = 0
while True:
    a=input("Enter a number to find ongoing average ( type 'stop' to  quit the program or restart to find new average): ")
    if a.lower() == "stop":
        break
    
    if a.lower() == "restart":
        count = 0
        tot = 0
        print("The average has been reset to 0")
        continue
        
    if a.lstrip('-').replace('.', '', 1).isdigit():
        a=float(a)
        count += 1 
        tot += a 
        average=tot/count
        print("Current average: ", average)

    else:
        print("Invalid input. Please try again.")
print("The program has been stopped. Please run again to restart the program.")