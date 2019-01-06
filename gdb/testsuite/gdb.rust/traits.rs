// Copyright (C) 2017-2019 Free Software Foundation, Inc.

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#![allow(dead_code)]
#![allow(unused_variables)]
#![allow(unused_assignments)]

pub trait T {
}

impl T for f64 {
}

impl T for u8 {
}

pub fn main() {
    let d = 23.5f64;
    let u = 23u8;

    let td = &d as &T;
    let tu = &u as &T;

    println!("");               // set breakpoint here
}
