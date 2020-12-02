#A generator which generates a powerset of the items

def one_bag(items):
    N = len(items) #no. of items inside
    for i in range(2**N): #Since for every item there are two possibilities that either it's in the bag or not
        bag = []
        for j in range(N):
            if ((i>>j)%2 == 1):
                bag.append(items[j])
        yield bag

def two_bags(items):
    N = len(items)
    for i in range(3**N):
        bag1 = []
        bag2 = []
        for j in range(N):
            if ( i // (3**j) ) % 3 == 1:
                bag1.append(items[j])
            elif ( i // (3**j) ) % 3 == 2:
                bag2.append(items[j])
        yield (bag1,bag2)        

items = ["a","b","c","d","e","f"]