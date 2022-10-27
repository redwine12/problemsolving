def solution(sides):
    max = 0
    for i in range(0,3):
        if max < sides[i]:
            max = sides[i]
    sides.remove(max)
    if sum(sides) > max:
        answer = 1
    else:
        answer = 2

    return answer