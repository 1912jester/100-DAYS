def calculate_fine(days):
    if days <= 5:
        fine = days * 2
        return f"Fine ₹{fine}"
    elif days <= 10:
        # First 5 days at ₹2, remaining up to 10 days at ₹4
        fine = (5 * 2) + ((days - 5) * 4)
        return f"Fine ₹{fine}"
    elif days <= 30:
        # First 5 days at ₹2, next 5 days at ₹4, remaining up to 30 days at ₹6
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6)
        return f"Fine ₹{fine}"
    else:
        return "Membership Cancelled"


# Example test case execution
if __name__ == "__main__":
    test_inputs = [4, 8, 15, 31]
    for days in test_inputs:
        print(f"Input: {days}")
        print(f"Output: {calculate_fine(days)}\n")