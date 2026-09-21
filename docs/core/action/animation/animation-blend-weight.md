[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
