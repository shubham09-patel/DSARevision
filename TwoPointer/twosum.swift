import Foundation

func twoSum(_ input: [Int], _ target: Int) -> (Int, Int)? {
    var arr = input.sorted()

    var left = 0
    var right = arr.count - 1

    while left < right {
        let sum = arr[left] + arr[right]

        if sum == target {
            return (arr[left], arr[right])
        } else if sum < target {
            left += 1
        } else {
            right -= 1
        }
    }

    return nil
}

let arr = [2, 5, 1, 7, 3]
let target = 6

if let answer = twoSum(arr, target) {
    print(answer.0, answer.1)
} else {
    print("No pair found")
}