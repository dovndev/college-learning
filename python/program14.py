from datetime import datetime

n= datetime.now()
print("current date and time:",n)
print("Format 1:",n.strftime('%Y-%m-%d%I:%M:%S'))
print("Format 2:",n.strftime('%m%d%Y'))
print("Format 3:",n.strftime('%A%B%d,%Y'))
print("Format 4:",n.strftime('%A%B%d,%Y%I:%M:%S%p'))
print("Format 5:",n.strftime('%a%b-%w%I:%M:%S%Y'))
print("ISO format:",n.strftime('%b-%a-%w%I:%M:%S%Y'))
print("Format 7:",n.isoformat())
print("time only:",n.strftime('%H-%M-%S'))
print("Current month:",n.strftime('%m'))
print("Current year:",n.strftime('%m'))
