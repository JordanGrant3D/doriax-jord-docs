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

## [Vector2](vector2.md).this[size_t i]

Access a component by index (`0` = x, `1` = y). The `const` overload returns a copy for reading; the non-`const` overload returns a reference so you can write `v[1] = 5.0f`.

```cpp
float operator[](const size_t i) const;
float& operator[](const size_t i);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-operator-index.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-operator-index.h"
```
