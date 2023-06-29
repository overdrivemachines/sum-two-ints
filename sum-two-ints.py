def twoNumberSum(array, targetSum):
    result = []
    if len(array) <= 1:
        return result

    array.sort()
    i = 0
    j = len(array) - 1
    sum = 0
    while i < j:
        sum = array[i] + array[j]
        if sum > targetSum:
            j = j - 1
        elif sum < targetSum:
            i = i + 1
        else:
            result.append(array[i])
            result.append(array[j])
            break
    return result


a = [5, 1, 4, 3, 21]
print(twoNumberSum(a, 9))
