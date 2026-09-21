---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Material
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Material](material.md).operator !=

Returns `true` when any factor, texture, UV set, alpha mode, or name differs from `other` (the negation of `operator ==`). CharacterController uses it to detect when the damage flash has altered the skin and the HUD must refresh.

```cpp
bool operator != (const Material& other) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-operator-not-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-operator-not-equal.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
