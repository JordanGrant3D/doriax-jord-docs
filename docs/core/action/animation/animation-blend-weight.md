---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Animation
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Animation](animation.md).blendWeight

The clip's current blend weight (`0.0`–`1.0`). When several clips animate the same skeleton, each bone's final pose is the weight-normalized average of the running clips. Setting it cancels any in-progress fade; reading it returns the live weight while a fade is running.

```cpp
float getBlendWeight() const;
void setBlendWeight(float weight);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/action/animation/animation-blend-weight.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/action/animation/animation-blend-weight.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
