[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).length()

Magnitude: `sqrt(x*x + y*y)`. This is the stick-deflection test behind CharacterController's `moveDeadzone` logic.

```cpp
float length() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-length.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-length.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
