def mutate_string(string, position, character):
    """l=list(string)
    l[position]=character
    new="".join(l)"""
    new=string[:position]+character+string[position+1:]
    
    return(new)

