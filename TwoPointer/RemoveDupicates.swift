import Foundation

func removeDuplicates(_ nums: inout [Int]) -> Int {
    if nums.isEmpty {
        return 0
    }

    var i = 0

    for j in 1..<nums.count {
        if nums[j] != nums[i] {
            i += 1
            nums[i] = nums[j]
        }
    }

    return i + 1
}

var nums = [1, 1, 2, 3, 3]

let k = removeDuplicates(&nums)

print("Number of unique elements:", k)
print("Unique elements:", Array(nums.prefix(k)))