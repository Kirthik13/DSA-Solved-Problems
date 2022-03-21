import React ,{ Component } from 'react'

export class Welcome extends Component{
    render(){
        return (<div><h1>hi {this.props.name} {this.props.heroName}</h1>{this.props.children}</div>)
        
    }
}

export default Welcome
