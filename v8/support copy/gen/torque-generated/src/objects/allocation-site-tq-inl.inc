// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=8&c=3
template<class D, class P>
AllocationSite TorqueGeneratedAllocationMemento<D, P>::allocation_site() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAllocationMemento::allocation_site(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=8&c=3
template<class D, class P>
AllocationSite TorqueGeneratedAllocationMemento<D, P>::allocation_site(PtrComprCageBase cage_base) const {
  AllocationSite value;
  value = TaggedField<AllocationSite>::load(cage_base, *this, kAllocationSiteOffset);
  DCHECK(value.IsAllocationSite());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=8&c=3
template<class D, class P>
void TorqueGeneratedAllocationMemento<D, P>::set_allocation_site(AllocationSite value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsAllocationSite());
  WRITE_FIELD(*this, kAllocationSiteOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kAllocationSiteOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=7&c=1
template<class D, class P>
D TorqueGeneratedAllocationMemento<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedAllocationMemento<D, P>::TorqueGeneratedAllocationMemento(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAllocationMemento_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAllocationMemento<D, P>::TorqueGeneratedAllocationMemento(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAllocationMemento_NonInline(*this));
}
