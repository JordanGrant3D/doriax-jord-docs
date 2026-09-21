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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
