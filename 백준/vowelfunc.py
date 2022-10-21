def solution(my_string):

    answer = ''
    
    vowel = ['a','e','o','u','i']
    for i in my_string:
        if i in vowel:
            continue
        else:
            answer += i
    
    return answer


    # 2nd solve
    # def solution(my_string):
    #     vowels = ['a','e','i','o','u']
    #     for vowel in vowels:
    #       my_string = my_string.replace(vowel, '')
    #   return my_string
        