if __name__ == '__main__':
    names=[]
    scores=[]
    for _ in range(int(input())):
        name = input()
        names.append(name)
        score = float(input())
        scores.append(score)

    min_score=min(scores)
    max_score=max(scores)
    for i in range(len(scores)):
        if(scores[i]>min_score and scores[i]<max_score):
            max_score=scores[i];
    res=[]
    for i in range(len(scores)):
        if(scores[i]==max_score):
            res.append(names[i])
    res.sort();
    for i in range(len(res)):
        print (res[i])
