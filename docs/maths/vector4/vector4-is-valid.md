###### version: 0.7.1
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).isValid()

Returns `true` when `x`, `y`, `z` and `w` are all finite (`std::isfinite`). Rejects both NaN and infinity in tint colours and blend weights.

```cpp
bool isValid() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-is-valid.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-is-valid.h"
```
