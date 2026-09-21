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

## [Vector2](vector2.md).operator==(const Vector2& rkVector)

Component-wise equality: `true` only when both `x` and `y` match. Use it to detect a perfectly still mouse or centred stick.

```cpp
bool operator==(const Vector2& rkVector) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-operator-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-operator-equal.h"
```
