![Hotel Del Luna](banner.svg)
# 🏨 Hotel Management System

A console-based Hotel Management System built in C as an academic project. It simulates the core operations of a hotel — room booking, food ordering, amenity access, check-in/check-out, and cancellation with refund handling.

---

## 📁 Project Structure

```
hotel-management-system/
├── hotel-management-system.c   # Main source file
├── README.md                   # Project documentation
├── banner.svg                  # Project banner
├── gitignore                   # Git ignore rules
└── LICENSE                     # MIT License
```

---

## ✨ Features

| Module | Description |
|---|---|
| **Room Facility** | Browse and book from 5 room types; each has a unique price and description |
| **Food & Beverages** | Order from a 10-item menu; hotel guests get room delivery |
| **Amenities** | Access gym, pool, spa, or meeting rooms based on room type |
| **Check-in / Check-out** | Log arrival time and handle departure with a farewell message |
| **Cancellation & Refund** | Full refund if not yet checked in; denied after check-in |

---

## 🛏️ Room Types & Prices

| # | Room Type | Price / Night | Size |
|---|---|---|---|
| 1 | Single Room | $200 | 37–45 m² |
| 2 | Double Room | $300 | 40–45 m² |
| 3 | King Room | $400 | 32–50 m² |
| 4 | Executive Suite | $500 | Multi-room suite |
| 5 | Presidential Suite | $1000 | Premium, one per property |

---

## 🍽️ Food Menu

| # | Item | Price |
|---|---|---|
| 1 | Masala Dosa | $50 |
| 2 | Chaat | $40 |
| 3 | Vada Pav | $80 |
| 4 | Idli | $50 |
| 5 | Paratha | $30 |
| 6 | Naan | $40 |
| 7 | Aloo Gobi | $100 |
| 8 | Butter Chicken | $250 |
| 9 | Dal Tadka | $100 |
| 10 | Tandoori Chicken | $300 |

---

## 🏊 Amenity Access by Room Type

| Amenity | Single | Double | King | Executive | Presidential |
|---|---|---|---|---|---|
| Fitness Center | ✅ | ✅ | ✅ | ✅ | ✅ |
| Swimming Pool | ❌ | ❌ | ✅ | ✅ | ✅ |
| Spa Facilities | ❌ | ❌ | ✅ | ✅ | ✅ |
| Meeting Rooms | ❌ | ❌ | ❌ | ✅ | ✅ |

---

## 🚀 How to Run

### Prerequisites
- GCC compiler installed on your system

### Linux / macOS

```bash
gcc hotel-management-system.c -o hotel_management
./hotel_management
```

### Windows

```bash
gcc hotel-management-system.c -o hotel_management.exe
hotel_management.exe
```

---

## 🔧 Tech Stack

- **Language:** C
- **Libraries:** `stdio.h`, `stdlib.h`, `string.h`, `time.h`
- **Storage:** In-memory arrays (no external database)

---

## ⚠️ Known Limitations

- Data is not persisted — all bookings are lost when the program exits.
- Maximum of 10 concurrent customers (fixed array size).
- No input validation for invalid customer IDs or out-of-range menu choices.
- The `room_type` variable is global, so amenity checks only reflect the last booked room.

---

## 🗺️ Program Flow

```
Start
  └── Main Menu (loops until Exit)
        ├── 1. Room Facility    → Select type → Confirm → Assign ID
        ├── 2. Food & Beverages → Pick item → Room delivery or dine-in
        ├── 3. Amenities        → Verify ID → Check room type → Grant/deny access
        ├── 4. Check-in/out     → Verify ID → Log time or farewell
        ├── 5. Cancellation     → Verify ID → Full refund or deny
        └── 6. Exit
```

---

## 👩‍💻 Author

**Kamireddy Yagnasree**  
Academic project — Console-based Hotel Management System in C

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).
