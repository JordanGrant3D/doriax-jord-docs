---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Joint3DType
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

enum

| Joint3D Type | Description |
| :--- | :--- |
| FIXED | Rigidly fuses two bodies with no relative motion. |
| DISTANCE | Links two bodies with a fixed separation. |
| POINT | Ball-and-socket joint rotating freely around a point. |
| HINGE | Single-axis hinge for doors and elbows. |
| CONE | Cone-limited ball joint for necks and wrists. |
| PRISMATIC | Slider with travel limits along one axis. |
| SWINGTWIST | Shoulder-style joint with independent swing and twist limits. |
| SIXDOF | Fully configurable six-degree-of-freedom joint. |
| PATH | Constrains a body to travel along a spline path. |
| GEAR | Couples two hinges with a gear ratio. |
| RACKANDPINON | Converts hinge rotation into slider translation. |
| PULLEY | Counterweight pulley between two bodies. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
