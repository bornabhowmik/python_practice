# writing function to convert hours to minutes
def hoursToMins(hours):
    mins = hours*60
    return mins

# testing hoursToMins function
hrs = 5.25
convertedMins= hoursToMins(hrs)

print(f"{hrs} Hours = {convertedMins} Minutes")



