---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).operator-=(const Vector2&) / operator-=(float)

In-place subtraction: remove a look offset vector, or shift both axes down by a scalar. Returns `*this`.

```cpp
Vector2& operator-=(const Vector2& rkVector);
Vector2& operator-=(const float fScaler);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-operator-subtract-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-operator-subtract-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
