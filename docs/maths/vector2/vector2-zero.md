[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).ZERO

Shorthand for writing `Vector2(0, 0)`. Use it to reset a 2D look delta or stick accumulator at the start of a frame.

```cpp
static const Vector2 ZERO;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-zero.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-zero.h"
```
