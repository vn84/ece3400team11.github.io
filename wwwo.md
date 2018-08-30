# What we worked on

## Labs

{% for lab in site.labs %}

- [{{ lab.title }}]({{ lab.url | relative_url }})

{% endfor %}

## Milestones

{% for milestone in site.milestones %}

- [{{ milestone.title }}]({{ milestone.url | relative_url }})

{% endfor %}

## Misc

{% for misc in site.miscs %}

- [{{ misc.title }}]({{ misc.url | relative_url }})

{% endfor %}