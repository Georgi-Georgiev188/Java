number_produkts = int(input())
sort = str(input())
delivery = str(input())
value = 0 

if number_produkts > 10:
    if sort == "90X130":
        value = 110 * number_produkts
        if number_produkts > 30:
            value = value * 0.95
        if number_produkts > 60:
            value = value * 0.92
        if delivery == "With delivery":
                value+=60
        else:
                value+=0
        if number_produkts > 99:
                    value = value * 0.96
        value = "{:.2f}".format(value)                
        print(value,"BGN")                      
    if sort == "100X150":
        value = 150 * number_produkts
        if number_produkts > 40:
            value = value * 0.94
        if number_produkts > 80:
            value = value * 0.90
        if delivery == "With delivery":
                value+=60
        else:
                value+=0
        if number_produkts > 99:
                    value = value * 0.96  
        value = "{:.2f}".format(value)                
        print(value,"BGN")                                      
    if sort == "130X180":
        value = 190 * number_produkts
        if number_produkts > 20:
            value = value * 0.93
        if number_produkts > 50:
            value = value * 0.88
        if delivery == "With delivery":
                value+=60
        else:
                value+=0
        if number_produkts > 99:
                    value = value * 0.96
        value = "{:.2f}".format(value)                
        print(value,"BGN")                            
    if sort == "200X300":
        value = 250 * number_produkts
        if number_produkts > 25:
            value = value * 0.91
        if number_produkts > 50:
            value = value * 0.86
        if delivery == "With delivery":
                value+=60
        else:
                value+=0
        if number_produkts > 99:
                    value = value * 0.96
        value = "{:.2f}".format(value)                
        print(value,"BGN")                                            
else:
    print("Invalid order")       