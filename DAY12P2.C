def calculate_electricity_bill(units):
    if units <= 100:
        bill = units * 5
    elif units <= 200:
        bill = (100 * 5) + ((units - 100) * 7)
    elif units <= 300:
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10)
    else:
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12)
    
    return f"Bill: ₹{bill}"


# Example test case execution
if __name__ == "__main__":
    test_inputs = [50, 150, 250]
    for units in test_inputs:
        print(f"Input: {units}")
        print(f"Output: {calculate_electricity_bill(units)}\n")