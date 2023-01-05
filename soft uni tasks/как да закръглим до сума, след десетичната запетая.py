name_of_company = str(input())
adults_tickets = float(input())
children_tickets = float(input())
adults_value = float(input())
taks = float(input())

children_value = adults_value * 0.3
total_adult = adults_value + taks
total_kids = children_value + taks
total = (adults_tickets * total_adult) + (children_tickets * total_kids)
win = total * 0.2
format_float = "{:.2f}".format(win)
print(f"The profit of your agency from {name_of_company} tickets is {format_float} lv.")