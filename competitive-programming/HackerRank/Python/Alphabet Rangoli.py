def print_rangoli(size):
    # your code goes here
    #x = size + (size - 1)   #length of string
    for i in range(-size+1,size):
        string=""
        string = string + "-" * (2 * abs(i))
        j = size
        char = ord("a")
        while(j != abs(i)):
            string = string + chr( char+(j-1) )
            #print("j=" , j , "i=" , abs(i) , "string=" , string)
            if(j != (abs(i) + 1)):
                string = string + "-"
            j -= 1
        if(len(string)>1):
            string = string+string[len(string)-2::-1]
        print(string)


