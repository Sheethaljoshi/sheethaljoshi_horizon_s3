#Here we initalise the 'count' to keep track of number of numbers being input and the 'tot' as the total sum of the numbers inputed , as both 0 and 'collection' to store unique numbers.
count = 0 
tot = 0
collection = set()

print("Enter a number to find ongoing average ( type 'stop' to  quit the program or 'restart' to find new average)!")

#This starts an infinite loop to repeatedly get the users input
while True: 
    
    #Ask the user to input a number, stop the program, or reset the average.
    a=input("Input: ")
    
    #Check if the user wants to stop the program - the loop is terminated if condition for loop to break is satisfied.
    if a.lower() == "stop":
        break 
    
    #Check if the user wants to reset the average - the count snd total are rest to 0 and the 'collection' set is cleared. Then, a message is displayed and the rest of the loop is skipped.
    if a.lower() == "restart":
        count = 0
        tot = 0
        collection = set()
        print("The average has been reset to 0")
        continue
    
    #Check if the input represents a valid number (positive or negative, including decimals) and finds and prints the corresponding average
    if a.lstrip('-').replace('.', '', 1).isdigit():
        a=float(a)
        
        #Check if the number is not already in the 'collection' set (no duplicates allowed), and adds the number to the 'collection' set to prevent duplicates
        if a not in collection:
            count += 1 
            tot += a 
            average=tot/count
            collection.add(a)
            print("Output: ", average)
        else:
            print("Output: ", average)
            continue
        
    #If the input is not a valid number, displays an error message.
    else:
        print("Invalid input. Please try again.")
        
#Displays a message when the user stops the program.
print("The program has been stopped. Please run again to restart the program.")