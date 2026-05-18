# Hotel Management System

A simple hotel management program I built using C as part of my academic project. It runs on the console and covers the basic operations you'd expect at a hotel — booking rooms, ordering food, using amenities, checking in/out, and handling cancellations.

---

## What it does

- **Room Booking** — Pick from 5 room types (Single, Double, King, Executive Suite, Presidential Suite). Each has a price per night and a brief description.
- **Food Ordering** — Guests can order from a 10-item menu. If you're a hotel customer, the order gets delivered to your room.
- **Amenities** — Access the gym, pool, spa, or meeting rooms depending on your room type.
- **Check-in / Check-out** — Logs your check-in time and handles check-out with a goodbye message.
- **Cancellation & Refund** — If you haven't checked in yet, you get a full refund.

---

## How to run it

You'll need GCC installed. Then just:

```bash
gcc hotel_management.c -o hotel_management
./hotel_management
```

On Windows:
```bash
hotel_management.exe
```

---

## Room Prices

| Room | Price/night |
|------|-------------|
| Single | $200 |
| Double | $300 |
| King | $400 |
| Executive Suite | $500 |
| Presidential Suite | $1000 |

---

## Tech used

Just C — with the standard libraries (`stdio.h`, `stdlib.h`, `string.h`, `time.h`).

---

## Notes

This was one of my first projects, so the code is fairly straightforward. It uses arrays, in-memory data storage, switch-case menus, and basic loops. Nothing fancy, but it works and covers all the core flows.

---

Built by Kamireddy Yagnasree
