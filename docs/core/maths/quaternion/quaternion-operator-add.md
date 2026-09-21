---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).operator+(const Quaternion&) / operator+()

Component-wise addition for blend math (NOT rotation composition — use `*`), plus unary `+` returning itself. Feeds `nlerp`/`squad` control-point math.

```cpp
Quaternion operator+(const Quaternion& rhs) const;
const Quaternion& operator+() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-operator-add.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-operator-add.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
